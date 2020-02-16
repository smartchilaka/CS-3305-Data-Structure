#ifndef MAIN_SAVITCH_GRAPH_H
#define MAIN_SAVITCH_GRAPH_H
#include <cstdlib> // Provides size_t
#include <set>      // Provides set
 
 namespace Assignment
{
    template <class Item>
    class graph
    {
    public:
        // MEMBER CONSTANTS
        static const std::size_t MAXIMUM = 20;
        // CONSTRUCTOR
        graph( ) { many_vertices = 0; }
        // MODIFICATION MEMBER FUNCTIONS
        void add_vertex(const Item& label);
        void add_edge(std::size_t source, std::size_t target);
        void remove_edge(std::size_t source, std::size_t target);
        Item& operator [ ] (std::size_t vertex);
        // CONSTANT MEMBER FUNCTIONS
        std::size_t size( ) const { return many_vertices; }
        bool is_edge(std::size_t source, std::size_t target) const;
        std::set<std::size_t> neighbors(std::size_t vertex) const;
        Item operator[ ] (std::size_t vertex) const;
    private:
        std::set<std::size_t> edges[MAXIMUM];
        Item labels[MAXIMUM];
        std::size_t many_vertices;
    };
}

#include "graph.template" // Include the implementation.
#endif
